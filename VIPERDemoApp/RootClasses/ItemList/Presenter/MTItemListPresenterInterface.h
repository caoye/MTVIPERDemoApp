//
//  MTItemListPresenterInterface.h
//  VIPERDemoApp
//
//  Created by MAXIM TSVETKOV on 28.08.15.
//  Copyright (c) 2015 MAXIM TSVETKOV. All rights reserved.
//

#import "MTRootPresenterInterface.h"

@protocol MTItemListPresenterInterface <NSObject, MTRootPresenterInterface>

@optional

- (void)configureView;
- (void)updateViewBeforeAppearing;
- (void)updateViewAfterAppearing;
- (void)leftBarButtonPressed;
- (void)rightBarButtonPressed;

@end
