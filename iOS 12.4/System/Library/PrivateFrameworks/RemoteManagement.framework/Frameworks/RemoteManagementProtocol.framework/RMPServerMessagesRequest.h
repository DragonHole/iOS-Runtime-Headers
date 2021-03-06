/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:48 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementProtocol/RMPRemoteManagementRequest.h>
#import <libobjc.A.dylib/RMPRegisteredTypeProtocol.h>

@class NSArray, NSString;

@interface RMPServerMessagesRequest : RMPRemoteManagementRequest <RMPRegisteredTypeProtocol> {

	NSArray* _messages;

}

@property (nonatomic,copy) NSArray * messages;                      //@synthesize messages=_messages - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)requestWithUUID:(id)arg1 withMessages:(id)arg2 ;
-(NSArray *)messages;
-(void)setMessages:(NSArray *)arg1 ;
-(id)serialize;
-(BOOL)loadRequestFromDictionary:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

