/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNDonationLoggerProvider;
@interface CNDDonorLoader : NSObject {

	id<CNDonationLoggerProvider> _loggerProvider;

}

@property (nonatomic,readonly) id<CNDonationLoggerProvider> loggerProvider;              //@synthesize loggerProvider=_loggerProvider - In the implementation block
+(id)currentExtensionsObservable;
+(id)continuousExtensionsObservable;
+(id)extensionAttributes;
-(id<CNDonationLoggerProvider>)loggerProvider;
-(id)donorWithIdentifier:(id)arg1 ;
-(id)init;
@end

