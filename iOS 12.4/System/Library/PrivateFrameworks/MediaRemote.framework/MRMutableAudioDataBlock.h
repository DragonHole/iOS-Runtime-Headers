/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRAudioDataBlock.h>

@class MRAudioBuffer;

@interface MRMutableAudioDataBlock : MRAudioDataBlock

@property (nonatomic,retain) MRAudioBuffer * buffer; 
@property (assign,nonatomic) SCD_Struct_MR19 time; 
@property (assign,nonatomic) float gain; 
-(void)setTime:(SCD_Struct_MR19)arg1 ;
-(void)setBuffer:(MRAudioBuffer *)arg1 ;
-(void)setGain:(float)arg1 ;
@end

