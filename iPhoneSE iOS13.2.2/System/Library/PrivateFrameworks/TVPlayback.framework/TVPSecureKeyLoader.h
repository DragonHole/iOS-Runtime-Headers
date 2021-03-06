/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVPSecureKeyLoaderDelegate;
@class TVPPlaybackReportingEventCollection;

@interface TVPSecureKeyLoader : NSObject {

	id<TVPSecureKeyLoaderDelegate> _delegate;
	TVPPlaybackReportingEventCollection* _eventCollection;

}

@property (assign,nonatomic,__weak) id<TVPSecureKeyLoaderDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TVPPlaybackReportingEventCollection * eventCollection;              //@synthesize eventCollection=_eventCollection - In the implementation block
-(id<TVPSecureKeyLoaderDelegate>)delegate;
-(void)setDelegate:(id<TVPSecureKeyLoaderDelegate>)arg1 ;
-(void)startLoadingCertificateDataForRequest:(id)arg1 ;
-(void)startLoadingContentIdentifierDataForRequest:(id)arg1 ;
-(void)startLoadingKeyResponseDataForRequest:(id)arg1 ;
-(void)sendStopRequest;
-(TVPPlaybackReportingEventCollection *)eventCollection;
-(void)setEventCollection:(TVPPlaybackReportingEventCollection *)arg1 ;
@end

