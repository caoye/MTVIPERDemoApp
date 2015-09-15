//
//  MTCountryListWireframe.h
//  VIPERDemoApp
//
//  Created by MAXIM TSVETKOV on 27.08.15.
//  Copyright (c) 2015 MAXIM TSVETKOV. All rights reserved.
//

#import "MTRootWireframe.h"
#import "MTCountryListModuleInterface.h"

@protocol MTCityListModuleInterface;

@interface MTCountryListWireframe : MTRootWireframe
<
    MTCountryListModuleInterface
>

@property (nonatomic, strong, nonnull) id<MTCityListModuleInterface>cityListModule;

- (void)onDidSelectCountry:(__nonnull id)country;

@end
