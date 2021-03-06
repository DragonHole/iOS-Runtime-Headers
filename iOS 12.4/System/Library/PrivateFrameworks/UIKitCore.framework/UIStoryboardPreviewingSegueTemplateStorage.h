/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class UIView, UIStoryboardPreviewingSegueTemplate, UIStoryboardSegueTemplate;

@interface UIStoryboardPreviewingSegueTemplateStorage : NSObject <NSCoding> {

	UIView* _sender;
	UIStoryboardPreviewingSegueTemplate* _previewTemplate;
	UIStoryboardSegueTemplate* _commitTemplate;

}

@property (assign,nonatomic,__weak) UIView * sender;                                                    //@synthesize sender=_sender - In the implementation block
@property (assign,nonatomic,__weak) UIStoryboardPreviewingSegueTemplate * previewTemplate;              //@synthesize previewTemplate=_previewTemplate - In the implementation block
@property (assign,nonatomic,__weak) UIStoryboardSegueTemplate * commitTemplate;                         //@synthesize commitTemplate=_commitTemplate - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIView *)sender;
-(UIStoryboardPreviewingSegueTemplate *)previewTemplate;
-(UIStoryboardSegueTemplate *)commitTemplate;
-(void)setSender:(UIView *)arg1 ;
-(void)setPreviewTemplate:(UIStoryboardPreviewingSegueTemplate *)arg1 ;
-(void)setCommitTemplate:(UIStoryboardSegueTemplate *)arg1 ;
@end

