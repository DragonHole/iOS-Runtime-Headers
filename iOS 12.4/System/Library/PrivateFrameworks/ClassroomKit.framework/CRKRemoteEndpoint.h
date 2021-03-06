/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CRKRemoteEndpoint : NSObject <NSCopying> {

	unsigned short _port;
	NSString* _IPAddress;

}

@property (nonatomic,copy,readonly) NSString * IPAddress;                //@synthesize IPAddress=_IPAddress - In the implementation block
@property (nonatomic,readonly) unsigned short port;                      //@synthesize port=_port - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringValue; 
-(NSString *)IPAddress;
-(id)initWithIPAddress:(id)arg1 port:(unsigned short)arg2 ;
-(BOOL)isOnSameHostAsRemoteEndpoint:(id)arg1 ;
-(BOOL)isOnSameHostButDifferentPortAsRemoteEndpoint:(id)arg1 ;
-(BOOL)isEqualToRemoteEndpoint:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringValue;
-(unsigned short)port;
@end

