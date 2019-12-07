/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:50 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface ENSSKeychainQuery : NSObject {

	NSString* _account;
	NSString* _service;
	NSString* _label;
	NSData* _passwordData;
	NSString* _accessGroup;
	unsigned long long _synchronizationMode;

}

@property (nonatomic,copy) NSString * account;                                    //@synthesize account=_account - In the implementation block
@property (nonatomic,copy) NSString * service;                                    //@synthesize service=_service - In the implementation block
@property (nonatomic,copy) NSString * label;                                      //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * accessGroup;                                //@synthesize accessGroup=_accessGroup - In the implementation block
@property (assign,nonatomic) unsigned long long synchronizationMode;              //@synthesize synchronizationMode=_synchronizationMode - In the implementation block
@property (nonatomic,copy) NSData * passwordData;                                 //@synthesize passwordData=_passwordData - In the implementation block
@property (nonatomic,copy) id<NSCoding> passwordObject; 
@property (nonatomic,copy) NSString * password; 
+(id)errorWithCode:(int)arg1 ;
+(BOOL)isSynchronizationAvailable;
-(NSString *)password;
-(id)query;
-(void)setPassword:(NSString *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSString *)account;
-(void)setAccount:(NSString *)arg1 ;
-(BOOL)save:(id*)arg1 ;
-(NSString *)service;
-(void)setService:(NSString *)arg1 ;
-(NSString *)accessGroup;
-(void)setAccessGroup:(NSString *)arg1 ;
-(BOOL)deleteItem:(id*)arg1 ;
-(BOOL)fetch:(id*)arg1 ;
-(id)fetchAll:(id*)arg1 ;
-(void)setPasswordObject:(id<NSCoding>)arg1 ;
-(id<NSCoding>)passwordObject;
-(NSData *)passwordData;
-(void)setPasswordData:(NSData *)arg1 ;
-(unsigned long long)synchronizationMode;
-(void)setSynchronizationMode:(unsigned long long)arg1 ;
@end
