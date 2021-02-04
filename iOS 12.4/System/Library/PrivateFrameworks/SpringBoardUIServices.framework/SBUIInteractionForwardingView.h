/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIView.h>

@class NSHashTable, NSSet;

@interface SBUIInteractionForwardingView : UIView {

	NSHashTable* _ignoreAlphaSubviewsTable;

}

@property (nonatomic,copy) NSSet * ignoreAlphaSubviews; 
-(NSSet *)ignoreAlphaSubviews;
-(void)setIgnoreAlphaSubviews:(NSSet *)arg1 ;
-(void)addIgnoreAlphaSubview:(id)arg1 ;
-(void)removeIgnoreAlphaSubview:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
@end
