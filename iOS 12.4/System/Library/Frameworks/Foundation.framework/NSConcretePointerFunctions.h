/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSPointerFunctions.h>

@interface NSConcretePointerFunctions : NSPointerFunctions {

	NSSlice* slice;

}
+(BOOL)initializeSlice:(NSSlice*)arg1 withOptions:(unsigned long long)arg2 ;
+(void)initializeBackingStore:(NSSlice*)arg1 sentinel:(BOOL)arg2 ;
-(void)setUsesStrongWriteBarrier:(BOOL)arg1 ;
-(void)setUsesWeakReadAndWriteBarriers:(BOOL)arg1 ;
-(/*function pointer*/void*)sizeFunction;
-(/*function pointer*/void*)hashFunction;
-(/*function pointer*/void*)isEqualFunction;
-(/*function pointer*/void*)descriptionFunction;
-(/*function pointer*/void*)acquireFunction;
-(/*function pointer*/void*)relinquishFunction;
-(BOOL)usesStrongWriteBarrier;
-(BOOL)usesWeakReadAndWriteBarriers;
-(void)setAcquireFunction:(/*function pointer*/void*)arg1 ;
-(void)setRelinquishFunction:(/*function pointer*/void*)arg1 ;
-(void)setHashFunction:(/*function pointer*/void*)arg1 ;
-(void)setIsEqualFunction:(/*function pointer*/void*)arg1 ;
-(void)setSizeFunction:(/*function pointer*/void*)arg1 ;
-(void)setDescriptionFunction:(/*function pointer*/void*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithOptions:(unsigned long long)arg1 ;
@end

