/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TPSSubscriptionLabel : NSObject {

	NSString* _localizedBadgeLabel;
	NSString* _localizedLongLabel;
	NSString* _unlocalizedLongLabel;

}

@property (nonatomic,readonly) NSString * localizedBadgeLabel;               //@synthesize localizedBadgeLabel=_localizedBadgeLabel - In the implementation block
@property (nonatomic,readonly) NSString * localizedLongLabel;                //@synthesize localizedLongLabel=_localizedLongLabel - In the implementation block
@property (nonatomic,readonly) NSString * unlocalizedLongLabel;              //@synthesize unlocalizedLongLabel=_unlocalizedLongLabel - In the implementation block
+(id)labelsFromUnlocalizedLabels:(id)arg1 localizedLongLabels:(id)arg2 localizedBadgeLabels:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)localizedBadgeLabel;
-(id)initWithUnlocalizedLabel:(id)arg1 localizedLongLabel:(id)arg2 localizedBadgeLabel:(id)arg3 ;
-(NSString *)localizedLongLabel;
-(NSString *)unlocalizedLongLabel;
-(BOOL)isEqualToSubscriptionLabel:(id)arg1 ;
@end

