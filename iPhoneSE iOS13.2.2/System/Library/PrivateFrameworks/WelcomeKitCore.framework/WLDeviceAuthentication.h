/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WLDeviceAuthentication : NSObject <NSSecureCoding> {

	NSString* _sessionUUID;

}

@property (nonatomic,readonly) NSString * sessionUUID;              //@synthesize sessionUUID=_sessionUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)sessionUUID;
@end
