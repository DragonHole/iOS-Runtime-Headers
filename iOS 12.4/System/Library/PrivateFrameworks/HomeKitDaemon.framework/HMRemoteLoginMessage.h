/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSError;

@interface HMRemoteLoginMessage : HMFObject <NSSecureCoding> {

	NSString* _sessionID;
	NSError* _error;

}

@property (nonatomic,readonly) NSString * sessionID;              //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) NSError * error;                     //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithSessionID:(id)arg1 ;
-(id)initNewMessage;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSString *)sessionID;
@end
