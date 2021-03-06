/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:12 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PLResourceLocalAvailabilityRequestOptions : NSObject {

	BOOL _networkAccessAllowed;
	BOOL _shouldPrioritize;
	BOOL _transient;
	NSString* _taskIdentifier;
	/*^block*/id _progressHandler;
	/*^block*/id _dataHandler;

}

@property (assign,getter=isNetworkAccessAllowed,nonatomic) BOOL networkAccessAllowed;              //@synthesize networkAccessAllowed=_networkAccessAllowed - In the implementation block
@property (assign,nonatomic) BOOL shouldPrioritize;                                                //@synthesize shouldPrioritize=_shouldPrioritize - In the implementation block
@property (nonatomic,copy) NSString * taskIdentifier;                                              //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (nonatomic,copy) id progressHandler;                                                     //@synthesize progressHandler=_progressHandler - In the implementation block
@property (assign,getter=isTransient,nonatomic) BOOL transient;                                    //@synthesize transient=_transient - In the implementation block
@property (nonatomic,copy) id dataHandler;                                                         //@synthesize dataHandler=_dataHandler - In the implementation block
-(NSString *)taskIdentifier;
-(BOOL)shouldPrioritize;
-(void)setTaskIdentifier:(NSString *)arg1 ;
-(void)setShouldPrioritize:(BOOL)arg1 ;
-(void)setTransient:(BOOL)arg1 ;
-(void)setDataHandler:(id)arg1 ;
-(BOOL)isTransient;
-(void)setNetworkAccessAllowed:(BOOL)arg1 ;
-(id)progressHandler;
-(BOOL)isNetworkAccessAllowed;
-(id)dataHandler;
-(void)setProgressHandler:(id)arg1 ;
@end

