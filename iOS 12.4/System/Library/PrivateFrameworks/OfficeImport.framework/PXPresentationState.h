/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OCXReadState.h>

@protocol TCCancelDelegate;
@class NSMutableDictionary, OAXDrawingState, OAVReadState, OAXTableStyleCache, PDPresentation, CXNamespace;

@interface PXPresentationState : OCXReadState {

	NSMutableDictionary* mModelObjects;
	OAXDrawingState* mOfficeArtState;
	OAVReadState* mOAVState;
	OAXTableStyleCache* mTableStyleCache;
	NSMutableDictionary* mSlideURLToIndexMap;
	PDPresentation* mTgtPresentation;
	id<TCCancelDelegate> mCancel;
	CXNamespace* mPXPresentationMLNamespace;
	NSMutableDictionary* mCommentAuthorIdToIndexMap;

}

@property (nonatomic,retain) id<TCCancelDelegate> cancelDelegate; 
@property (nonatomic,readonly) NSMutableDictionary * commentAuthorIdToIndexMap; 
@property (nonatomic,retain) CXNamespace * PXPresentationMLNamespace; 
+(void)setPptChartGraphicPropertyDefaultBlock:(id)arg1 ;
-(void)setupNSForXMLFormat:(int)arg1 ;
-(id)tableStyleCache;
-(id)oavState;
-(id)officeArtState;
-(void)setCancelDelegate:(id<TCCancelDelegate>)arg1 ;
-(id<TCCancelDelegate>)cancelDelegate;
-(CXNamespace *)PXPresentationMLNamespace;
-(id)tgtPresentation;
-(NSMutableDictionary *)commentAuthorIdToIndexMap;
-(id)modelObjectForLocation:(id)arg1 ;
-(long long)slideIndexForSlideURL:(id)arg1 ;
-(void)setPXPresentationMLNamespace:(CXNamespace *)arg1 ;
-(void)setModelObject:(id)arg1 forLocation:(id)arg2 ;
-(void)resetOfficeArtState;
-(void)setSlideIndex:(long long)arg1 forSlideURL:(id)arg2 ;
-(void)setTgtPresentation:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isCancelled;
@end

