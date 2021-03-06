/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNDDonationPreferences.h>

@protocol CNDDonationPreferences <NSObject>
@property (assign,getter=isDonationsEnabled,nonatomic) BOOL donationsEnabled; 
@required
-(void)setDonationsEnabled:(BOOL)arg1;
-(BOOL)isDonationsEnabled;

@end


@protocol CNDonationPreferencesLogger;
@class NSNotificationCenter, NSString;

@interface CNDDonationPreferences : NSObject <CNDDonationPreferences> {

	NSNotificationCenter* _notificationCenter;
	Class _storageClass;
	id<CNDonationPreferencesLogger> _logger;

}

@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;                  //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,readonly) Class storageClass;                                         //@synthesize storageClass=_storageClass - In the implementation block
@property (nonatomic,readonly) id<CNDonationPreferencesLogger> logger;                     //@synthesize logger=_logger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isDonationsEnabled,nonatomic) BOOL donationsEnabled; 
+(id)observableWithPreferences:(id)arg1 notificationCenter:(id)arg2 schedulerProvider:(id)arg3 ;
-(void)setDonationsEnabled:(BOOL)arg1 ;
-(id)initWithNotificationCenter:(id)arg1 storageClass:(Class)arg2 logger:(id)arg3 ;
-(BOOL)isDonationsEnabled;
-(Class)storageClass;
-(NSNotificationCenter *)notificationCenter;
-(id<CNDonationPreferencesLogger>)logger;
-(id)init;
-(NSString *)description;
@end

