/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@interface TSDInsertionContext : NSObject

@property (nonatomic,readonly) BOOL hasPreferredCenter; 
@property (getter=isPreferredCenterRequired,nonatomic,readonly) BOOL preferredCenterRequired; 
@property (nonatomic,readonly) CGPoint preferredCenter; 
@property (nonatomic,readonly) BOOL shouldEndEditing; 
@property (nonatomic,readonly) BOOL insertFloating; 
@property (nonatomic,readonly) BOOL insertFromDrag; 
@property (nonatomic,readonly) BOOL fromDragToInsertController; 
@property (nonatomic,readonly) BOOL insertWillBeDiscarded; 
@property (getter=isInteractive,nonatomic,readonly) BOOL interactive; 
+(id)dragInsertionContextWithPreferredCenter:(CGPoint)arg1 required:(BOOL)arg2 shouldEndEditing:(BOOL)arg3 fromDragToInsertController:(BOOL)arg4 insertWillBeDiscarded:(BOOL)arg5 ;
+(id)nonInteractiveInsertionContext;
+(id)nonInteractiveFloatingInsertionContext;
+(id)dragInsertionContextWithPreferredCenter:(CGPoint)arg1 required:(BOOL)arg2 fromDragToInsertController:(BOOL)arg3 insertWillBeDiscarded:(BOOL)arg4 ;
-(BOOL)hasPreferredCenter;
-(BOOL)isPreferredCenterRequired;
-(CGPoint)preferredCenter;
-(BOOL)shouldEndEditing;
-(BOOL)insertFloating;
-(BOOL)insertFromDrag;
-(BOOL)fromDragToInsertController;
-(BOOL)insertWillBeDiscarded;
-(id)init;
-(BOOL)isInteractive;
@end

