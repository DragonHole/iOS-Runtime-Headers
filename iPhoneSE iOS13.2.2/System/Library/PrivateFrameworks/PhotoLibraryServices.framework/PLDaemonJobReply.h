/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_xpc_object;
@class NSObject;

@interface PLDaemonJobReply : NSObject <NSSecureCoding> {

	NSObject*<OS_xpc_object> _xpcReply;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> xpcReply;              //@synthesize xpcReply=_xpcReply - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithReply:(id)arg1 ;
-(NSObject*<OS_xpc_object>)xpcReply;
@end
