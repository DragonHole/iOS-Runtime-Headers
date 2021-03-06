/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TKTokenConfigurationProxy, NSArray, TKTokenID, NSString, NSData;

@interface TKTokenConfiguration : NSObject {

	TKTokenConfigurationProxy* _proxy;
	NSArray* _keychainItems;
	TKTokenID* _tokenID;

}

@property (nonatomic,readonly) TKTokenID * tokenID;                 //@synthesize tokenID=_tokenID - In the implementation block
@property (nonatomic,readonly) NSString * instanceID; 
@property (nonatomic,copy) NSData * configurationData; 
@property (nonatomic,copy) NSArray * keychainItems; 
+(id)interfaceForProtocol;
-(id)beginTransaction;
-(TKTokenID *)tokenID;
-(id)keyForObjectID:(id)arg1 error:(id*)arg2 ;
-(NSData *)configurationData;
-(NSString *)instanceID;
-(id)initWithTokenID:(id)arg1 proxy:(id)arg2 ;
-(NSArray *)keychainItems;
-(void)setConfigurationData:(NSData *)arg1 ;
-(void)setKeychainItems:(NSArray *)arg1 ;
-(id)certificateForObjectID:(id)arg1 error:(id*)arg2 ;
@end

