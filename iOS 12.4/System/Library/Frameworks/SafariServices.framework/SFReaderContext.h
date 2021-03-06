/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:09 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFReaderContext <NSObject>
@required
-(id)fontManager;
-(void)loadNewArticle;
-(BOOL)isLoadingNextPage;
-(void)createArticleFinder;
-(void)setReaderLanguageTag:(id)arg1;
-(BOOL)isReaderAvailable;
-(void)stopLoadingNextPage;
-(void)clearReaderWebView;
-(BOOL)shouldCreateArticleFinder;
-(void)activateReader;
-(void)deactivateReaderNow:(unsigned long long)arg1;
-(id)scrollPositionInformation;
-(void)clearAvailability;
-(void)clearUnusedReaderResourcesSoon;
-(id)readerURL;
-(void)collectReaderContentForMailWithCompletion:(/*^block*/id)arg1;
-(void)setReaderFont:(id)arg1;
-(void)setReaderTheme:(long long)arg1 forAppearance:(long long)arg2;
-(BOOL)canIncreaseReaderTextSize;
-(BOOL)canDecreaseReaderTextSize;
-(void)increaseReaderTextSize;
-(void)decreaseReaderTextSize;
-(void)resetReaderTextSize;
-(id)configurationManager;

@end

