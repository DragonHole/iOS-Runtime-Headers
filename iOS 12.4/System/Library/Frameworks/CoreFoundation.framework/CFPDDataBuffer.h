/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface CFPDDataBuffer : NSObject
+(id)newBufferFromFile:(int)arg1 allowMappingIfSafe:(BOOL)arg2 ;
+(id)newBufferFromPropertyList:(void*)arg1 ;
+(id)newBufferFromCFData:(CFDataRef)arg1 ;
-(BOOL)purgable;
-(BOOL)beginAccessing;
-(void)endAccessing;
-(BOOL)validatePlist;
-(void*)copyPropertyListWithMutability:(unsigned long long)arg1 ;
-(id)copyXPCData;
-(CFDataRef)copyCFData;
-(unsigned long long)length;
-(void*)bytes;
@end

