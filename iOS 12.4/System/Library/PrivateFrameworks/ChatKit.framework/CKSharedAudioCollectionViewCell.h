/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKSharedContentsCollectionViewCell.h>

@class CKAudioProgressView, UIDateLabel;

@interface CKSharedAudioCollectionViewCell : CKSharedContentsCollectionViewCell {

	CKAudioProgressView* _audioPlaybackView;

}

@property (nonatomic,retain) CKAudioProgressView * audioPlaybackView;              //@synthesize audioPlaybackView=_audioPlaybackView - In the implementation block
@property (nonatomic,retain) UIDateLabel * previewTitleLabel; 
+(id)reuseIdentifier;
-(void)configureWithAttachmentItem:(id)arg1 ;
-(id)formattedDurationTextForAsset:(id)arg1 ;
-(id)formattedCreatedDateTextFromDate:(id)arg1 ;
-(CKAudioProgressView *)audioPlaybackView;
-(void)setAudioPlaybackView:(CKAudioProgressView *)arg1 ;
-(void)layoutSubviews;
@end

