/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:52 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKSharedAssetsControllerProtocol <NSObject>
@property (assign,nonatomic,__weak) id<CKSharedAssetsControllerDelegate> delegate; 
@required
-(id<CKSharedAssetsControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(unsigned long long)assetType;
-(CGSize*)contentSizeThatFits:(CGSize)arg1;
-(void)parentScrollViewDidScroll:(CGPoint)arg1;
-(void)updateAttachmentItems:(id)arg1;
-(BOOL)isDisplayingAttachmentContent;

@end

