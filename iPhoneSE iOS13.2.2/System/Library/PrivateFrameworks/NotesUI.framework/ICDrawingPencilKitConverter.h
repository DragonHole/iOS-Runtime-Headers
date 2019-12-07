/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <NotesUI/NotesUI-Structs.h>
@class NSOperationQueue, NSMapTable, NSObject, NSMutableDictionary, NSMutableArray, NSArray;

@interface ICDrawingPencilKitConverter : NSObject {

	BOOL _isThrowaway;
	NSOperationQueue* _converterQueue;
	NSMapTable* _lastOperationForAttachmentID;
	NSObject*<OS_dispatch_queue> _convertDispatchQueue;
	NSMutableDictionary* _accountIDCanBeUpdated;
	NSMutableDictionary* _accountIDDeviceCheckDate;
	NSMutableArray* _mutableFailedSketches;

}

@property (nonatomic,retain) NSOperationQueue * converterQueue;                              //@synthesize converterQueue=_converterQueue - In the implementation block
@property (nonatomic,retain) NSMapTable * lastOperationForAttachmentID;                      //@synthesize lastOperationForAttachmentID=_lastOperationForAttachmentID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> convertDispatchQueue;              //@synthesize convertDispatchQueue=_convertDispatchQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accountIDCanBeUpdated;                    //@synthesize accountIDCanBeUpdated=_accountIDCanBeUpdated - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accountIDDeviceCheckDate;                 //@synthesize accountIDDeviceCheckDate=_accountIDDeviceCheckDate - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableFailedSketches;                         //@synthesize mutableFailedSketches=_mutableFailedSketches - In the implementation block
@property (assign,nonatomic) BOOL isThrowaway;                                               //@synthesize isThrowaway=_isThrowaway - In the implementation block
@property (nonatomic,readonly) NSArray * failedSketches; 
+(id)sharedConverter;
+(BOOL)canUpdateFullscreenSketchAttachment:(id)arg1 ;
+(BOOL)canUpdateInlineDrawingAttachment:(id)arg1 ;
+(id)newThrowawayConverter;
+(unsigned long long)countOfUpdatableDrawingsInNote:(id)arg1 ;
-(id)init;
-(void)setIsThrowaway:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)convertDispatchQueue;
-(NSMutableDictionary *)accountIDCanBeUpdated;
-(NSMutableDictionary *)accountIDDeviceCheckDate;
-(NSMutableArray *)mutableFailedSketches;
-(void)convertAllSketchesWithProgress:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)convertAllSketchesInNote:(id)arg1 ;
-(BOOL)isThrowaway;
-(id)convertSketchAttachment:(id)arg1 toInlineDrawingAtRange:(NSRange)arg2 inNote:(id)arg3 ;
-(id)convertSketch:(id)arg1 ;
-(BOOL)compareDrawingAttachment:(id)arg1 withConvertedDrawing:(id)arg2 ;
-(void)convertDrawingsInNote:(id)arg1 waitUntilFinished:(BOOL)arg2 ;
-(NSMapTable *)lastOperationForAttachmentID;
-(NSOperationQueue *)converterQueue;
-(BOOL)shouldConvertAllDrawingsIfNeeded;
-(BOOL)shouldAutoConvertNote:(id)arg1 ;
-(id)addOperationForAttachment:(id)arg1 automatic:(BOOL)arg2 ;
-(void)canAutoUpdateDrawingsInAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)countOfDrawingsNeedingConversionInNote:(id)arg1 ;
-(NSArray *)failedSketches;
-(void)convertAllSketchesWithProgress:(id)arg1 ;
-(id)updateInlineDrawingAttachment:(id)arg1 ;
-(void)convertDrawingsInNote:(id)arg1 inWindow:(UIWindow*)arg2 message:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)performThrowawayConversionIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)convertAllDrawingsIfNeeded;
-(void)convertDrawingsInNoteIfNeeded:(id)arg1 ;
-(void)operationComplete:(id)arg1 ;
-(void)setConverterQueue:(NSOperationQueue *)arg1 ;
-(void)setLastOperationForAttachmentID:(NSMapTable *)arg1 ;
-(void)setConvertDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAccountIDCanBeUpdated:(NSMutableDictionary *)arg1 ;
-(void)setAccountIDDeviceCheckDate:(NSMutableDictionary *)arg1 ;
-(void)setMutableFailedSketches:(NSMutableArray *)arg1 ;
@end
