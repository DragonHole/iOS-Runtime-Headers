/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol CACNumberedElement <CACVoiceOverDescribable>
@property (assign,nonatomic) CGRect labelRectangle; 
@property (nonatomic,readonly) CGRect interfaceOrientedRectangle; 
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,retain) NSString * numberedLabel; 
@property (assign,nonatomic) long long arrowOrientation; 
@property (assign,nonatomic) long long badgePresentation; 
@required
-(NSString *)label;
-(NSString *)numberedLabel;
-(CGRect)interfaceOrientedRectangle;
-(void)setNumberedLabel:(id)arg1;
-(CGRect)labelRectangle;
-(void)setLabelRectangle:(CGRect)arg1;
-(long long)arrowOrientation;
-(void)setArrowOrientation:(long long)arg1;
-(long long)badgePresentation;
-(void)setBadgePresentation:(long long)arg1;

@end
