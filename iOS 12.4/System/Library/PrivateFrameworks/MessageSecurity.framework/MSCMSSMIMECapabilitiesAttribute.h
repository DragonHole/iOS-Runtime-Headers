/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSCMSAttributeCoder.h>

@class NSSet;

@interface MSCMSSMIMECapabilitiesAttribute : NSObject <MSCMSAttributeCoder> {

	NSSet* _capabilities;

}

@property (readonly) NSSet * capabilities;              //@synthesize capabilities=_capabilities - In the implementation block
-(NSSet *)capabilities;
-(id)encodeAttributeWithError:(id*)arg1 ;
-(id)initWithAttribute:(id)arg1 error:(id*)arg2 ;
-(id)init;
@end

