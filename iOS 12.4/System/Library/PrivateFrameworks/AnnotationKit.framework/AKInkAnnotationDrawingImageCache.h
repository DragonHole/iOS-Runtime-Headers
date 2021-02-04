/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPointerArray;

@interface AKInkAnnotationDrawingImageCache : NSObject {

	NSPointerArray* _pointerArray;

}

@property (nonatomic,retain) NSPointerArray * pointerArray;              //@synthesize pointerArray=_pointerArray - In the implementation block
+(void)purgeSharedCache;
+(id)sharedCache;
-(void)_makeKeyMostRecentlyUsed:(id)arg1 ;
-(long long)_indexOfPointer:(void*)arg1 ;
-(void)_removeEntryAtIndex:(unsigned long long)arg1 ;
-(void)_addEntryWithObject:(id)arg1 key:(id)arg2 ;
-(void)_purgeExtraEntries;
-(NSPointerArray *)pointerArray;
-(void)setPointerArray:(NSPointerArray *)arg1 ;
-(id)init;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
@end
