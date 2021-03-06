/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFMessageDataSection.h>

@class MFDataHolder, NSString;

@interface MFBasicMessageDataSection : NSObject <MFMessageDataSection> {

	MFDataHolder* _dataHolder;
	BOOL _complete;
	BOOL _partial;
	NSString* _partName;

}

@property (assign,getter=isPartial,nonatomic) BOOL partial;                //@synthesize partial=_partial - In the implementation block
@property (assign,getter=isComplete,nonatomic) BOOL complete;              //@synthesize complete=_complete - In the implementation block
@property (nonatomic,retain) MFDataHolder * dataHolder;                    //@synthesize dataHolder=_dataHolder - In the implementation block
@property (nonatomic,retain) NSString * partName;                          //@synthesize partName=_partName - In the implementation block
-(void)setPartName:(NSString *)arg1 ;
-(MFDataHolder *)dataHolder;
-(NSString *)partName;
-(void)setDataHolder:(MFDataHolder *)arg1 ;
-(BOOL)isPartial;
-(void)setPartial:(BOOL)arg1 ;
-(void)dealloc;
-(void)setComplete:(BOOL)arg1 ;
-(BOOL)isComplete;
-(void)setData:(id)arg1 ;
@end

