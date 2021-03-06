/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:12 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface TSUPair : NSObject <NSCopying, NSMutableCopying, NSCoding> {

	id mFirst;
	id mSecond;

}
+(id)pairWithFirst:(id)arg1 second:(id)arg2 ;
+(id)pairWithPair:(id)arg1 ;
+(id)pair;
-(id)initWithFirst:(id)arg1 second:(id)arg2 ;
-(id)first;
-(id)initWithPair:(id)arg1 ;
-(void)p_SetFirst:(id)arg1 ;
-(void)p_SetSecond:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)second;
@end

