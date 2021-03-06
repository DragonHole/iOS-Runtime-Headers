/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFReaderWebProcessControllerProtocol <NSObject>
@required
-(void)setConfiguration:(id)arg1;
-(void)setReaderIsActive:(BOOL)arg1;
-(void)prepareToTransitionToReader;
-(void)didCreateReaderPageContextHandle:(id)arg1;
-(void)loadNewReaderArticle;
-(void)setReaderInitialTopScrollOffset:(long long)arg1 configuration:(id)arg2 isViewingArchive:(BOOL)arg3;
-(void)setInitalArticleScrollPositionAsDictionary:(id)arg1;
-(void)collectReadingListItemInfoWithBookmarkID:(id)arg1;
-(void)collectReaderContentForMail;
-(void)activateFont:(id)arg1;
-(void)prepareReaderContentForPrinting;
-(void)didFinishPresentationUpdateAfterTransitioningToReader;
-(void)checkReaderAvailability;
-(void)collectArticleContent;

@end

