/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:06 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpriteKit/SpriteKit-Structs.h>
@class NSMutableArray;

@interface SKSoundSource : NSObject {

	unsigned _sourceId;
	NSMutableArray* _buffers;

}

@property (assign,nonatomic) BOOL shouldLoop; 
@property (assign,nonatomic) double gain; 
@property (assign,nonatomic) CGPoint position; 
@property (nonatomic,readonly) BOOL isPlaying; 
@property (nonatomic,readonly) int completedBufferCount; 
@property (nonatomic,readonly) int queuedBufferCount; 
+(id)sourceWithBuffer:(id)arg1 ;
+(id)source;
-(void)queueBuffer:(id)arg1 ;
-(int)completedBufferCount;
-(int)queuedBufferCount;
-(void)purgeCompletedBuffers;
-(void)setShouldLoop:(BOOL)arg1 ;
-(BOOL)shouldLoop;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)stop;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(BOOL)play;
-(BOOL)isPlaying;
-(void)setGain:(double)arg1 ;
-(double)gain;
-(void)pause;
@end
