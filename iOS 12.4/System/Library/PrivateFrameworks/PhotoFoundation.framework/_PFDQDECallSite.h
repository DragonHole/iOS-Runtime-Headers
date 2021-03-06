/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSArray;

@interface _PFDQDECallSite : NSObject <NSCopying> {

	NSData* _addresses;
	NSArray* _symbols;

}
+(id)currentCallSite;
+(void)initialize;
-(id)initWithAddresses:(id)arg1 ;
-(id)backtraceWithPrefix:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

