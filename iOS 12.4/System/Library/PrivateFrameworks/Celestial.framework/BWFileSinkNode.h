/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWSinkNode.h>

@protocol BWNodeFileWriterStatusDelegate;
@interface BWFileSinkNode : BWSinkNode {

	id<BWNodeFileWriterStatusDelegate> _recordingStatusDelegate;

}

@property (assign,nonatomic) id<BWNodeFileWriterStatusDelegate> recordingStatusDelegate;              //@synthesize recordingStatusDelegate=_recordingStatusDelegate - In the implementation block
@property (nonatomic,readonly) unsigned long long lastFileSize; 
@property (nonatomic,readonly) SCD_Struct_BW2 lastFileDuration; 
-(id<BWNodeFileWriterStatusDelegate>)recordingStatusDelegate;
-(SCD_Struct_BW2)lastFileDuration;
-(unsigned long long)lastFileSize;
-(void)setRecordingStatusDelegate:(id<BWNodeFileWriterStatusDelegate>)arg1 ;
-(id)init;
@end

