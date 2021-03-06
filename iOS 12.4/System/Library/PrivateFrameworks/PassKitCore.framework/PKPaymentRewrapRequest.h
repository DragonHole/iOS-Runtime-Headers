/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentRewrapRequestBase.h>

@class NSString;

@interface PKPaymentRewrapRequest : PKPaymentRewrapRequestBase {

	NSString* _merchantIdentifier;
	NSString* _hostApplicationIdentifier;

}

@property (nonatomic,copy) NSString * merchantIdentifier;                     //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
@property (nonatomic,copy) NSString * hostApplicationIdentifier;              //@synthesize hostApplicationIdentifier=_hostApplicationIdentifier - In the implementation block
-(id)endpointName;
-(id)bodyDictionary;
-(void)setHostApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)hostApplicationIdentifier;
-(NSString *)merchantIdentifier;
-(void)setMerchantIdentifier:(NSString *)arg1 ;
@end

