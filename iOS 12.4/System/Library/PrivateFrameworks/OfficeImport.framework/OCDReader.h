/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TCCancelDelegate, OCDReaderDelegate;
@class TCImportTracing, NSString, NSData, NSError;

@interface OCDReader : NSObject {

	id<TCCancelDelegate> mCancelDelegate;
	id<OCDReaderDelegate> mDelegate;
	BOOL mIsThumbnail;
	TCImportTracing* mTracing;
	NSString* mFileName;
	NSData* mData;
	NSError* mStartError;

}

@property (nonatomic,retain) NSString * fileName; 
@property (nonatomic,retain) NSData * data; 
@property (nonatomic,retain) NSError * startError; 
@property (nonatomic,retain) id<TCCancelDelegate> cancelDelegate; 
@property (assign,nonatomic) id<OCDReaderDelegate> delegate; 
@property (assign,nonatomic) BOOL isThumbnail; 
@property (nonatomic,retain) TCImportTracing * tracing; 
-(NSString *)fileName;
-(BOOL)isThumbnail;
-(void)setFileName:(NSString *)arg1 ;
-(void)setIsThumbnail:(BOOL)arg1 ;
-(id)initWithCancelDelegate:(id)arg1 tracing:(id)arg2 ;
-(BOOL)isBinaryReader;
-(id)read;
-(NSError *)startError;
-(BOOL)verifyFileFormat;
-(TCImportTracing *)tracing;
-(void)setCancelDelegate:(id<TCCancelDelegate>)arg1 ;
-(void)setTracing:(TCImportTracing *)arg1 ;
-(void)setStartError:(NSError *)arg1 ;
-(void)setStartErrorMessageFromException:(id)arg1 ;
-(id<TCCancelDelegate>)cancelDelegate;
-(void)dealloc;
-(void)setDelegate:(id<OCDReaderDelegate>)arg1 ;
-(id<OCDReaderDelegate>)delegate;
-(BOOL)start;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
@end

