/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@protocol GEOEncyclopedicInfo, MKPlaceCardEncyclopedicControllerDelegate;
@class MKPlaceTextBlockCell, NSMutableArray, NSString;

@interface MKPlaceEncyclopedicViewController : MKPlaceSectionViewController <_MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol> {

	BOOL _textBlockExpanded;
	MKPlaceTextBlockCell* _textCell;
	NSMutableArray* _factoidCells;
	id<GEOEncyclopedicInfo> _encyclopedicInfo;
	id<MKPlaceCardEncyclopedicControllerDelegate> _encyclopedicControllerDelegate;

}

@property (nonatomic,retain) id<GEOEncyclopedicInfo> encyclopedicInfo;                                                         //@synthesize encyclopedicInfo=_encyclopedicInfo - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceCardEncyclopedicControllerDelegate> encyclopedicControllerDelegate;              //@synthesize encyclopedicControllerDelegate=_encyclopedicControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<GEOEncyclopedicInfo>)encyclopedicInfo;
-(id)infoCardChildPossibleActions;
-(void)setEncyclopedicInfo:(id<GEOEncyclopedicInfo>)arg1 ;
-(void)_viewEncyclopedicContent;
-(id)_factoids;
-(id)_textBlockTitle;
-(id)_textBlockText;
-(id<MKPlaceCardEncyclopedicControllerDelegate>)encyclopedicControllerDelegate;
-(void)setEncyclopedicControllerDelegate:(id<MKPlaceCardEncyclopedicControllerDelegate>)arg1 ;
-(void)_updateViews;
-(void)viewDidLoad;
@end

