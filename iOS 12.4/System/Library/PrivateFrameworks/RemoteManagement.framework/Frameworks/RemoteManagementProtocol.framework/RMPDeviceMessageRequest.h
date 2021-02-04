/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:48 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSArray;

@interface RMPDeviceMessageRequest : CEMPayloadBase {

	NSString* _requestType;
	NSString* _UDID;
	NSString* _userShortName;
	NSArray* _messages;

}

@property (nonatomic,copy) NSString * requestType;                //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,copy) NSString * UDID;                       //@synthesize UDID=_UDID - In the implementation block
@property (nonatomic,copy) NSString * userShortName;              //@synthesize userShortName=_userShortName - In the implementation block
@property (nonatomic,copy) NSArray * messages;                    //@synthesize messages=_messages - In the implementation block
+(id)requestWithUDID:(id)arg1 withUserShortName:(id)arg2 withMessages:(id)arg3 ;
+(BOOL)supportsSecureCoding;
-(NSString *)requestType;
-(void)setRequestType:(NSString *)arg1 ;
-(NSString *)UDID;
-(NSArray *)messages;
-(void)setMessages:(NSArray *)arg1 ;
-(id)serialize;
-(BOOL)loadMessageFromDictionary:(id)arg1 error:(id*)arg2 ;
-(void)setUDID:(NSString *)arg1 ;
-(NSString *)userShortName;
-(void)setUserShortName:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
