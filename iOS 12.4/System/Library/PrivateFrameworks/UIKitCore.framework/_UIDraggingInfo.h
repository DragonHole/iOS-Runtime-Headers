/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class _UIDraggingSession;


@protocol _UIDraggingInfo <NSObject>
@property (nonatomic,readonly) unsigned long long draggingSourceOperationMask; 
@property (assign,nonatomic) long long numberOfValidItemsForDrop; 
@property (nonatomic,readonly) _UIDraggingSession * localDraggingSession; 
@required
-(_UIDraggingSession *)localDraggingSession;
-(CGPoint*)draggingLocationInCoordinateSpace:(id)arg1;
-(unsigned long long)draggingSourceOperationMask;
-(void)enumerateItemsWithOptions:(unsigned long long)arg1 acceptableTypeIdentifiers:(id)arg2 usingBlock:(/*^block*/id)arg3;
-(long long)numberOfValidItemsForDrop;
-(void)setNumberOfValidItemsForDrop:(long long)arg1;

@end

