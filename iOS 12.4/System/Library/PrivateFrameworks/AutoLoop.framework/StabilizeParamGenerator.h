/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AutoLoop/AutoLoop-Structs.h>
@class AutoLoopStabilizer;

@interface StabilizeParamGenerator : NSObject {

	AutoLoopStabilizer* stabilizer;

}

@property (nonatomic,retain) AutoLoopStabilizer * stabilizer; 
-(id)initWithStabilizer:(id)arg1 ;
-(id)generateStabilizeParams;
-(void)GenerateIdentityHomographies:(HomographyRecordVector*)arg1 toStabilizeParams:(id)arg2 withImageBounds:(CGSize)arg3 firstFrameIndex:(unsigned long long)arg4 lastFrameIndex:(unsigned long long)arg5 ;
-(void)CopyCoordinateShiftedHomographies:(HomographyRecordVector*)arg1 firstIndex:(unsigned long long)arg2 lastIndex:(unsigned long long)arg3 toStabilizeParams:(id)arg4 withImageBounds:(CGSize)arg5 ;
-(void)setStabilizer:(AutoLoopStabilizer *)arg1 ;
-(AutoLoopStabilizer *)stabilizer;
-(id)generatePassThruForAsset:(id)arg1 trimStart:(SCD_Struct_Pr1)arg2 trimLength:(SCD_Struct_Pr1)arg3 ;
-(id)generateTrivialPassThruForFrameTimes:(vector<CMTime, std::__1::allocator<CMTime> >*)arg1 totalDuration:(SCD_Struct_Pr1)arg2 ;
@end

