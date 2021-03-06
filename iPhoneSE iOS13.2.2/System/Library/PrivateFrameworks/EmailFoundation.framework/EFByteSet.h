/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailFoundation/EmailFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface EFByteSet : NSObject <NSCopying, NSMutableCopying> {

	unsigned char _bitString[32];

}
+(id)asciiWhitespaceSet;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithCString:(const char*)arg1 ;
-(id)initWithRange:(NSRange)arg1 ;
-(BOOL)byteIsMember:(unsigned char)arg1 ;
@end

