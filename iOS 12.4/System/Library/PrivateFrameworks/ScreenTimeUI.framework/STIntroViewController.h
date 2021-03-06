/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class STIntroductionModel;


@protocol STIntroViewController <NSObject>
@property (readonly) STIntroductionModel * model; 
@property (copy) id completionBlock; 
@required
-(id)initWithIntroductionModel:(id)arg1;
-(id)navigationController;
-(void)setCompletionBlock:(/*^block*/id)arg1;
-(STIntroductionModel *)model;
-(id)completionBlock;

@end

