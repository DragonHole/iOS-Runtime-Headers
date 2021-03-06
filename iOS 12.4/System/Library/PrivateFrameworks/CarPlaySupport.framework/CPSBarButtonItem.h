/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:22 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIBarButtonItem.h>
#import <libobjc.A.dylib/CPSButtonDelegate.h>

@protocol CPSButtonDelegate;
@class NSUUID, NSString;

@interface CPSBarButtonItem : UIBarButtonItem <CPSButtonDelegate> {

	NSUUID* _identifier;
	id<CPSButtonDelegate> _delegate;

}

@property (nonatomic,readonly) NSUUID * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<CPSButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCPBarButton:(id)arg1 ;
-(id)_initWithCPBarButton:(id)arg1 showBackIndicator:(BOOL)arg2 ;
-(NSUUID *)identifier;
-(void)setDelegate:(id<CPSButtonDelegate>)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)setImage:(id)arg1 ;
-(id<CPSButtonDelegate>)delegate;
-(void)didSelectButton:(id)arg1 ;
@end

