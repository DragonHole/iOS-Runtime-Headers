/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:39 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSString, NSNumber, NSDictionary, NSURL, NSArray;

@interface PKPaymentRegistrationResponse : PKPaymentWebServiceResponse {

	NSString* _deviceIdentifier;
	NSNumber* _cardsOnFile;
	NSNumber* _maxCards;
	NSString* _primaryRegion;
	NSDictionary* _regions;
	NSString* _environmentName;
	NSURL* _brokerURL;
	NSURL* _trustedServiceManagerURL;
	NSURL* _paymentServicesURL;
	NSArray* _certificates;

}

@property (nonatomic,copy) NSString * deviceIdentifier;                    //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * cardsOnFile;                         //@synthesize cardsOnFile=_cardsOnFile - In the implementation block
@property (nonatomic,copy) NSNumber * maxCards;                            //@synthesize maxCards=_maxCards - In the implementation block
@property (nonatomic,copy) NSDictionary * regions;                         //@synthesize regions=_regions - In the implementation block
@property (nonatomic,copy) NSString * environmentName;                     //@synthesize environmentName=_environmentName - In the implementation block
@property (nonatomic,copy) NSURL * brokerURL;                              //@synthesize brokerURL=_brokerURL - In the implementation block
@property (nonatomic,copy) NSURL * trustedServiceManagerURL;               //@synthesize trustedServiceManagerURL=_trustedServiceManagerURL - In the implementation block
@property (nonatomic,copy) NSURL * paymentServicesURL;                     //@synthesize paymentServicesURL=_paymentServicesURL - In the implementation block
@property (nonatomic,copy) NSArray * certificates;                         //@synthesize certificates=_certificates - In the implementation block
@property (nonatomic,copy,readonly) NSString * primaryRegion;              //@synthesize primaryRegion=_primaryRegion - In the implementation block
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(NSString *)deviceIdentifier;
-(void)setRegions:(NSDictionary *)arg1 ;
-(NSString *)primaryRegion;
-(NSURL *)brokerURL;
-(void)setBrokerURL:(NSURL *)arg1 ;
-(NSURL *)paymentServicesURL;
-(void)setPaymentServicesURL:(NSURL *)arg1 ;
-(NSURL *)trustedServiceManagerURL;
-(void)setTrustedServiceManagerURL:(NSURL *)arg1 ;
-(NSNumber *)cardsOnFile;
-(NSNumber *)maxCards;
-(NSString *)environmentName;
-(void)setCardsOnFile:(NSNumber *)arg1 ;
-(void)setMaxCards:(NSNumber *)arg1 ;
-(void)setEnvironmentName:(NSString *)arg1 ;
-(void)setCertificates:(NSArray *)arg1 ;
-(NSArray *)certificates;
-(NSDictionary *)regions;
-(id)initWithData:(id)arg1 ;
@end

