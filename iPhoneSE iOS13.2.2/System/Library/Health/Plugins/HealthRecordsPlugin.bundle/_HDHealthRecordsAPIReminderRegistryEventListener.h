/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _HDHealthRecordsAPIReminderRegistryEventListener : NSObject {

	/*^block*/id _handledApplicationsUninstalledHandler;
	/*^block*/id _displayedAlertHandler;
	/*^block*/id _droppedReminderHandler;
	/*^block*/id _finishedProcessingReminderHandler;
	/*^block*/id _launchedClinicalSourceSettingsHandler;
	/*^block*/id _startedListeningForHomescreenUnlockedNotificationsHandler;
	/*^block*/id _receivedHomescreenUnlockedAtHomescreenNotificationHandler;
	/*^block*/id _stoppedListeningForHomescreenUnlockedNotificationsHandler;

}

@property (nonatomic,copy) id handledApplicationsUninstalledHandler;                                  //@synthesize handledApplicationsUninstalledHandler=_handledApplicationsUninstalledHandler - In the implementation block
@property (nonatomic,copy) id displayedAlertHandler;                                                  //@synthesize displayedAlertHandler=_displayedAlertHandler - In the implementation block
@property (nonatomic,copy) id droppedReminderHandler;                                                 //@synthesize droppedReminderHandler=_droppedReminderHandler - In the implementation block
@property (nonatomic,copy) id finishedProcessingReminderHandler;                                      //@synthesize finishedProcessingReminderHandler=_finishedProcessingReminderHandler - In the implementation block
@property (nonatomic,copy) id launchedClinicalSourceSettingsHandler;                                  //@synthesize launchedClinicalSourceSettingsHandler=_launchedClinicalSourceSettingsHandler - In the implementation block
@property (nonatomic,copy) id startedListeningForHomescreenUnlockedNotificationsHandler;              //@synthesize startedListeningForHomescreenUnlockedNotificationsHandler=_startedListeningForHomescreenUnlockedNotificationsHandler - In the implementation block
@property (nonatomic,copy) id receivedHomescreenUnlockedAtHomescreenNotificationHandler;              //@synthesize receivedHomescreenUnlockedAtHomescreenNotificationHandler=_receivedHomescreenUnlockedAtHomescreenNotificationHandler - In the implementation block
@property (nonatomic,copy) id stoppedListeningForHomescreenUnlockedNotificationsHandler;              //@synthesize stoppedListeningForHomescreenUnlockedNotificationsHandler=_stoppedListeningForHomescreenUnlockedNotificationsHandler - In the implementation block
-(void)droppedReminder:(id)arg1 ;
-(void)displayedAlertForPendingReminderID:(id)arg1 ;
-(void)launchedClinicalSettingsForSource:(id)arg1 ;
-(void)didFinishProcessingPendingReminderID:(id)arg1 ;
-(void)handledApplicationsUninstalled;
-(void)startedListeningForHomescreenUnlockedNotifications;
-(void)stoppedListeningForHomescreenUnlockedNotifications;
-(void)receivedHomescreenUnlockedAtHomescreenNotification;
-(id)handledApplicationsUninstalledHandler;
-(id)displayedAlertHandler;
-(id)finishedProcessingReminderHandler;
-(id)droppedReminderHandler;
-(id)launchedClinicalSourceSettingsHandler;
-(id)startedListeningForHomescreenUnlockedNotificationsHandler;
-(id)receivedHomescreenUnlockedAtHomescreenNotificationHandler;
-(id)stoppedListeningForHomescreenUnlockedNotificationsHandler;
-(void)setHandledApplicationsUninstalledHandler:(id)arg1 ;
-(void)setDisplayedAlertHandler:(id)arg1 ;
-(void)setDroppedReminderHandler:(id)arg1 ;
-(void)setFinishedProcessingReminderHandler:(id)arg1 ;
-(void)setLaunchedClinicalSourceSettingsHandler:(id)arg1 ;
-(void)setStartedListeningForHomescreenUnlockedNotificationsHandler:(id)arg1 ;
-(void)setReceivedHomescreenUnlockedAtHomescreenNotificationHandler:(id)arg1 ;
-(void)setStoppedListeningForHomescreenUnlockedNotificationsHandler:(id)arg1 ;
@end

