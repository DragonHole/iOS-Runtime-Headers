/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/TTVersionedDocument.h>

@class ICDrawing;

@interface ICDrawingVersionedDocument : TTVersionedDocument {

	ICDrawing* _drawing;

}

@property (nonatomic,retain) ICDrawing * drawing;              //@synthesize drawing=_drawing - In the implementation block
+(unsigned)serializationVersion;
+(unsigned)minimumSupportedVersion;
-(id)initWithData:(id)arg1 andReplicaID:(id)arg2 ;
-(void)mergeVersion:(unsigned)arg1 fromData:(id)arg2 ;
-(id)serializeCurrentVersion:(unsigned*)arg1 ;
-(ICDrawing *)drawing;
-(void)setDrawing:(ICDrawing *)arg1 ;
-(unsigned long long)mergeWithDrawingVersionedDocument:(id)arg1 ;
@end

