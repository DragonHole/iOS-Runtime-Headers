/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsUI/WDClinicalLocationCell.h>

@class HKClinicalProvider;

@interface WDClinicalOnboardingLocationCell : WDClinicalLocationCell {

	HKClinicalProvider* _provider;

}

@property (nonatomic,copy,readonly) HKClinicalProvider * provider;              //@synthesize provider=_provider - In the implementation block
-(void)prepareForReuse;
-(HKClinicalProvider *)provider;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_setupSubviews;
-(void)_updateForContentSizeCategory:(id)arg1 ;
-(void)_updateContentWithBrandable:(id)arg1 dataProvider:(id)arg2 ;
-(void)setProvider:(id)arg1 dataProvider:(id)arg2 ;
@end
