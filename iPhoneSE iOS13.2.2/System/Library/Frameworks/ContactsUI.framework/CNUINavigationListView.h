/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UITableView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CNUINavigationListViewDataSource, CNUINavigationListViewDelegate;
@class UILongPressGestureRecognizer, UIGestureRecognizer, NSIndexPath, UISelectionFeedbackGenerator, _CNUINavigationListViewPermissiveGestureRecognizerDelegate, NSString;

@interface CNUINavigationListView : UITableView <UIGestureRecognizerDelegate> {

	id<CNUINavigationListViewDataSource> _navigationListViewDataSource;
	id<CNUINavigationListViewDelegate> _navigationListViewDelegate;
	UILongPressGestureRecognizer* _selectionGestureRecognizer;
	UIGestureRecognizer* _additionalSelectionGestureRecognizer;
	UIGestureRecognizer* _pressGestureRecognizer;
	NSIndexPath* _trackedElementIndexPath;
	UISelectionFeedbackGenerator* _retargetBehavior;
	_CNUINavigationListViewPermissiveGestureRecognizerDelegate* _selectionGestureRecognizerDelegate;
	CGPoint _gestureStartLocation;
	CGPoint _gestureStartLocationInWindow;

}

@property (nonatomic,retain) UILongPressGestureRecognizer * selectionGestureRecognizer;                                                    //@synthesize selectionGestureRecognizer=_selectionGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * additionalSelectionGestureRecognizer;                                                   //@synthesize additionalSelectionGestureRecognizer=_additionalSelectionGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * pressGestureRecognizer;                                                                 //@synthesize pressGestureRecognizer=_pressGestureRecognizer - In the implementation block
@property (nonatomic,retain) NSIndexPath * trackedElementIndexPath;                                                                        //@synthesize trackedElementIndexPath=_trackedElementIndexPath - In the implementation block
@property (assign,nonatomic) CGPoint gestureStartLocation;                                                                                 //@synthesize gestureStartLocation=_gestureStartLocation - In the implementation block
@property (assign,nonatomic) CGPoint gestureStartLocationInWindow;                                                                         //@synthesize gestureStartLocationInWindow=_gestureStartLocationInWindow - In the implementation block
@property (nonatomic,retain) UISelectionFeedbackGenerator * retargetBehavior;                                                              //@synthesize retargetBehavior=_retargetBehavior - In the implementation block
@property (nonatomic,retain) _CNUINavigationListViewPermissiveGestureRecognizerDelegate * selectionGestureRecognizerDelegate;              //@synthesize selectionGestureRecognizerDelegate=_selectionGestureRecognizerDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CNUINavigationListViewDataSource> navigationListViewDataSource;                                     //@synthesize navigationListViewDataSource=_navigationListViewDataSource - In the implementation block
@property (assign,nonatomic,__weak) id<CNUINavigationListViewDelegate> navigationListViewDelegate;                                         //@synthesize navigationListViewDelegate=_navigationListViewDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)disableHeaderAccessibilityElements;
-(UILongPressGestureRecognizer *)selectionGestureRecognizer;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
-(id)dequeueNavigationListViewCell;
-(id)dequeueDetailNavigationListViewCell;
-(id)disclosureNavigationListViewCellForRowAtIndexPath:(id)arg1 ;
-(id)elementAtLocation:(CGPoint)arg1 ;
-(void)handleSelectionGestureRecognizerUpdate:(id)arg1 ;
-(void)handlePressSelection;
-(void)handlePanGestureRecognizerUpdate:(id)arg1 ;
-(void)stopTrackingElementAtIndexPath:(id)arg1 ;
-(void)startTrackingElementAtIndexPath:(id)arg1 ;
-(BOOL)location:(CGPoint)arg1 isInAccessoryControlTouchArea:(id)arg2 ;
-(void)updateCellAccessoryControlState:(id)arg1 withTrackedLocation:(CGPoint)arg2 ;
-(void)notifyDelegateWithSelectionEventAtPoint:(CGPoint)arg1 trackedElementIndexPath:(id)arg2 ;
-(void)notifyDelegateWithSelectionEventAtIndexPath:(id)arg1 ;
-(void)startTrackingSelectionFromGestureRecognizer:(id)arg1 ;
-(void)clearAdditionalSelectionGestureRecognizer;
-(id<CNUINavigationListViewDataSource>)navigationListViewDataSource;
-(void)setNavigationListViewDataSource:(id<CNUINavigationListViewDataSource>)arg1 ;
-(id<CNUINavigationListViewDelegate>)navigationListViewDelegate;
-(void)setNavigationListViewDelegate:(id<CNUINavigationListViewDelegate>)arg1 ;
-(void)setSelectionGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UIGestureRecognizer *)additionalSelectionGestureRecognizer;
-(void)setAdditionalSelectionGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(UIGestureRecognizer *)pressGestureRecognizer;
-(void)setPressGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(NSIndexPath *)trackedElementIndexPath;
-(void)setTrackedElementIndexPath:(NSIndexPath *)arg1 ;
-(CGPoint)gestureStartLocation;
-(void)setGestureStartLocation:(CGPoint)arg1 ;
-(CGPoint)gestureStartLocationInWindow;
-(void)setGestureStartLocationInWindow:(CGPoint)arg1 ;
-(UISelectionFeedbackGenerator *)retargetBehavior;
-(void)setRetargetBehavior:(UISelectionFeedbackGenerator *)arg1 ;
-(_CNUINavigationListViewPermissiveGestureRecognizerDelegate *)selectionGestureRecognizerDelegate;
-(void)setSelectionGestureRecognizerDelegate:(_CNUINavigationListViewPermissiveGestureRecognizerDelegate *)arg1 ;
@end
