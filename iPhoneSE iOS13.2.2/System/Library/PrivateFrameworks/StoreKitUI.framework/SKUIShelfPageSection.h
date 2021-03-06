/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SKUIShelfPageSectionConfiguration, SKUIShelfPageComponent;


@protocol SKUIShelfPageSection <NSObject>
@property (nonatomic,readonly) SKUIShelfPageSectionConfiguration * configuration; 
@property (nonatomic,readonly) SKUIShelfPageComponent * pageComponent; 
@required
-(SKUIShelfPageSectionConfiguration *)configuration;
-(id)initWithPageComponent:(id)arg1 configuration:(id)arg2;
-(id)initWithPageComponent:(id)arg1;
-(SKUIShelfPageComponent *)pageComponent;

@end

