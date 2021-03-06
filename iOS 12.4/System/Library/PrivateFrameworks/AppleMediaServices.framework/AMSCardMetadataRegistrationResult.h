/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString, NSDictionary;

@interface AMSCardMetadataRegistrationResult : NSObject {

	NSData* _artwork;
	NSString* _cardArtwork;
	long long _cardType;
	NSString* _descriptionLong;
	NSString* _descriptionShort;
	long long _paymentNetwork;
	NSString* _serialNumber;
	NSString* _suffix;
	NSDictionary* _dictionary;

}

@property (nonatomic,retain) NSData * artwork;                         //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,retain) NSString * cardArtwork;                   //@synthesize cardArtwork=_cardArtwork - In the implementation block
@property (assign,nonatomic) long long cardType;                       //@synthesize cardType=_cardType - In the implementation block
@property (nonatomic,retain) NSString * descriptionLong;               //@synthesize descriptionLong=_descriptionLong - In the implementation block
@property (nonatomic,retain) NSString * descriptionShort;              //@synthesize descriptionShort=_descriptionShort - In the implementation block
@property (assign,nonatomic) long long paymentNetwork;                 //@synthesize paymentNetwork=_paymentNetwork - In the implementation block
@property (nonatomic,retain) NSString * serialNumber;                  //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,retain) NSString * suffix;                        //@synthesize suffix=_suffix - In the implementation block
@property (nonatomic,retain) NSDictionary * dictionary;                //@synthesize dictionary=_dictionary - In the implementation block
-(void)setArtwork:(NSData *)arg1 ;
-(NSData *)artwork;
-(void)setPaymentNetwork:(long long)arg1 ;
-(long long)paymentNetwork;
-(NSString *)suffix;
-(long long)cardType;
-(void)setCardType:(long long)arg1 ;
-(NSString *)serialNumber;
-(void)setSerialNumber:(NSString *)arg1 ;
-(void)setSuffix:(NSString *)arg1 ;
-(NSString *)cardArtwork;
-(NSString *)descriptionLong;
-(NSString *)descriptionShort;
-(id)initWithCardArtwork:(id)arg1 cardType:(long long)arg2 descriptionLong:(id)arg3 descriptionShort:(id)arg4 paymentNetwork:(long long)arg5 serialNumber:(id)arg6 suffix:(id)arg7 ;
-(void)setCardArtwork:(NSString *)arg1 ;
-(void)setDescriptionLong:(NSString *)arg1 ;
-(void)setDescriptionShort:(NSString *)arg1 ;
-(id)init;
-(NSDictionary *)dictionary;
-(void)setDictionary:(NSDictionary *)arg1 ;
@end

