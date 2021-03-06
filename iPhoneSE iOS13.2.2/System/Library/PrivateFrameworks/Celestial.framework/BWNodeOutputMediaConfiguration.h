/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, BWFormatRequirements, NSArray;

@interface BWNodeOutputMediaConfiguration : NSObject {

	NSString* _associatedAttachedMediaKey;
	BWFormatRequirements* _formatRequirements;
	NSArray* _indexesOfInputsWhichDrivesThisOutput;
	NSString* _attachedMediaKeyOfInputWhichDrivesThisOutput;
	int _passthroughMode;
	int _indexOfInputWhichDrivesThisOutput;
	int _owningNodeRetainedBufferCount;
	BOOL _providesPixelBufferPool;
	BOOL _performsAttachedMediaRemapping;

}

@property (nonatomic,retain) BWFormatRequirements * formatRequirements;                          //@synthesize formatRequirements=_formatRequirements - In the implementation block
@property (assign,nonatomic) BOOL providesPixelBufferPool;                                       //@synthesize providesPixelBufferPool=_providesPixelBufferPool - In the implementation block
@property (assign,nonatomic) int passthroughMode;                                                //@synthesize passthroughMode=_passthroughMode - In the implementation block
@property (assign,nonatomic) int indexOfInputWhichDrivesThisOutput; 
@property (nonatomic,copy) NSArray * indexesOfInputsWhichDrivesThisOutput; 
@property (nonatomic,readonly) BOOL performsAttachedMediaRemapping; 
@property (nonatomic,copy) NSString * attachedMediaKeyOfInputWhichDrivesThisOutput; 
@property (assign,nonatomic) int owningNodeRetainedBufferCount;                                  //@synthesize owningNodeRetainedBufferCount=_owningNodeRetainedBufferCount - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setFormatRequirements:(BWFormatRequirements *)arg1 ;
-(BWFormatRequirements *)formatRequirements;
-(void)setPassthroughMode:(int)arg1 ;
-(void)setAttachedMediaKeyOfInputWhichDrivesThisOutput:(NSString *)arg1 ;
-(void)setIndexOfInputWhichDrivesThisOutput:(int)arg1 ;
-(void)setProvidesPixelBufferPool:(BOOL)arg1 ;
-(void)_setAssociatedAttachedMediaKey:(id)arg1 ;
-(int)passthroughMode;
-(void)setOwningNodeRetainedBufferCount:(int)arg1 ;
-(void)setIndexesOfInputsWhichDrivesThisOutput:(NSArray *)arg1 ;
-(BOOL)providesPixelBufferPool;
-(int)owningNodeRetainedBufferCount;
-(BOOL)isDrivenByInputWithIndex:(unsigned long long)arg1 ;
-(BOOL)performsAttachedMediaRemapping;
-(NSString *)attachedMediaKeyOfInputWhichDrivesThisOutput;
-(int)indexOfInputWhichDrivesThisOutput;
-(NSArray *)indexesOfInputsWhichDrivesThisOutput;
@end

