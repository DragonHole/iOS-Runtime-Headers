/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PFUbiquityLocation, NSError;

@interface PFUbiquityLocationStatus : NSObject {

	BOOL _isLive;
	BOOL _isDeleted;
	BOOL _isDownloaded;
	BOOL _isDownloading;
	BOOL _isUploaded;
	BOOL _isUploading;
	BOOL _isImported;
	BOOL _isScheduled;
	BOOL _isExported;
	BOOL _isFailed;
	PFUbiquityLocation* _location;
	NSError* _error;
	unsigned long long _hash;
	long long _numBytes;
	long long _numNotifications;

}

@property (nonatomic,readonly) BOOL isLive;                                //@synthesize isLive=_isLive - In the implementation block
@property (nonatomic,readonly) BOOL isDeleted;                             //@synthesize isDeleted=_isDeleted - In the implementation block
@property (nonatomic,readonly) BOOL isDownloaded;                          //@synthesize isDownloaded=_isDownloaded - In the implementation block
@property (assign,nonatomic) BOOL isDownloading;                           //@synthesize isDownloading=_isDownloading - In the implementation block
@property (nonatomic,readonly) BOOL isUploaded;                            //@synthesize isUploaded=_isUploaded - In the implementation block
@property (nonatomic,readonly) BOOL isUploading;                           //@synthesize isUploading=_isUploading - In the implementation block
@property (nonatomic,readonly) BOOL isScheduled;                           //@synthesize isScheduled=_isScheduled - In the implementation block
@property (nonatomic,readonly) BOOL isImported;                            //@synthesize isImported=_isImported - In the implementation block
@property (nonatomic,readonly) BOOL isExported;                            //@synthesize isExported=_isExported - In the implementation block
@property (nonatomic,readonly) BOOL isFailed;                              //@synthesize isFailed=_isFailed - In the implementation block
@property (nonatomic,readonly) long long numBytes;                         //@synthesize numBytes=_numBytes - In the implementation block
@property (nonatomic,readonly) NSError * error;                            //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) long long numNotifications;                 //@synthesize numNotifications=_numNotifications - In the implementation block
-(long long)numBytes;
-(void)statusDidChange;
-(void)checkFileURLState;
-(void)logWasImported;
-(void)logWasScheduled;
-(void)logImportWasCancelled;
-(void)logWasExported;
-(void)encounteredError:(id)arg1 ;
-(void)recoveredFromError;
-(BOOL)isDownloaded;
-(BOOL)isUploading;
-(BOOL)isExported;
-(BOOL)isScheduled;
-(long long)numNotifications;
-(id)initWithLocation:(id)arg1 ;
-(BOOL)isUploaded;
-(BOOL)isDeleted;
-(BOOL)isDownloading;
-(void)setIsDownloading:(BOOL)arg1 ;
-(BOOL)isImported;
-(BOOL)isFailed;
-(id)init;
-(void)dealloc;
-(unsigned long long)hash;
-(id)description;
-(PFUbiquityLocation *)location;
-(NSError *)error;
-(BOOL)isLive;
@end

