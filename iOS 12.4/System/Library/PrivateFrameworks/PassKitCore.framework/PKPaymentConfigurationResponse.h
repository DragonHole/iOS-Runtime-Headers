/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:39 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSData, NSString, NSDictionary;

@interface PKPaymentConfigurationResponse : PKPaymentWebServiceResponse {

	NSData* _data;
	NSData* _signature;
	NSString* _version;
	NSDictionary* _configuration;

}

@property (nonatomic,copy,readonly) NSData * data;                             //@synthesize data=_data - In the implementation block
@property (nonatomic,copy,readonly) NSData * signature;                        //@synthesize signature=_signature - In the implementation block
@property (nonatomic,copy,readonly) NSString * version;                        //@synthesize version=_version - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(NSData *)signature;
-(NSDictionary *)configuration;
-(NSString *)version;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
@end
