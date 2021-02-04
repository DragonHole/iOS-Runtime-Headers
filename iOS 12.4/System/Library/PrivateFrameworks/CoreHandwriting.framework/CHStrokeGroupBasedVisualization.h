/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:48 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHVisualization.h>

@class CHRecognitionSessionResult, NSSet;

@interface CHStrokeGroupBasedVisualization : CHVisualization {

	BOOL _newGroupsDefaultToActive;
	CHRecognitionSessionResult* _resultDrawn;
	NSSet* _activeStrokeGroupAncestorIdentifiers;

}

@property (nonatomic,retain) CHRecognitionSessionResult * resultDrawn;                          //@synthesize resultDrawn=_resultDrawn - In the implementation block
@property (nonatomic,copy) NSSet * activeStrokeGroupAncestorIdentifiers;                        //@synthesize activeStrokeGroupAncestorIdentifiers=_activeStrokeGroupAncestorIdentifiers - In the implementation block
@property (assign,nonatomic) id<CHStrokeGroupBasedVisualizationDelegate> delegate; 
@property (nonatomic,readonly) BOOL newGroupsDefaultToActive;                                   //@synthesize newGroupsDefaultToActive=_newGroupsDefaultToActive - In the implementation block
-(CGRect)dirtyRectForStrokeGroup:(id)arg1 ;
-(CHRecognitionSessionResult *)resultDrawn;
-(NSSet *)activeStrokeGroupAncestorIdentifiers;
-(void)recognitionSessionDidUpdateRecognitionResult;
-(void)toggleVisualizationRegionAtPoint:(CGPoint)arg1 ;
-(void)setResultDrawn:(CHRecognitionSessionResult *)arg1 ;
-(BOOL)newGroupsDefaultToActive;
-(void)_markStrokeGroupsAsActive:(id)arg1 ;
-(void)setActiveStrokeGroupAncestorIdentifiers:(NSSet *)arg1 ;
-(void)drawVisualizationInRect:(CGRect)arg1 context:(CGContextRef)arg2 viewBounds:(CGRect)arg3 ;
-(void)dealloc;
@end
