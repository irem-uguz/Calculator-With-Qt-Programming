## Executive Summary
#### Which API did you choose?
I implemented an object detection API for our app. I actually didn't choose that API. On our group meeting, we found 10 different API functionalities to implement. We decided that each group member will implement a functionality to make sure the group work was divided equally. We made a brainstorming to determine which functionalities that our APIs would provide. Then we randomly gave each API to some group member.
#### Why did you choose that API?
As I explanained in the previous question, I didn't choose to implement this object detection API. But I decided that we should add the object detection functionality our project. The reason was that I thought that it would be helpful to our app. As you know, our app is a language learning platform. When learning a language, it is helpfull to see the objects and the word that corresponds to that object, especially in the earlier stages of language learning. Seeing the picture is more memorable than reading a dictionary. In our app, the object detection functionality can be very usefull.
#### Details of The Chosen API
The object detection API basically takes a picture and lists the objects that are listed in the picture. With the help of the translation API that my other group mate implemented it can be a very usefull feature in our app.
#### What were the details of your task?
 My task was to implement a complete API that makes object detection in a picture. As we decided as a group to use Django as our platform and Python as our language, learning to use these tools were a part of my task. Also writing a documantation for my API is also my task.
 While implementing the object detection API, I used IBM Watson's object detection API. I chose that API becuse it was free to use basically. And it seemed to provide nice results. 
 My API doesn't have a front-end yet.
#### What functionalities that your API provide?
 As a group, our API provides 9 different functionalities:Object detection, movie recommender, language detection from text, language detection from the location, word of the day, translation, text to speech, tag detection and inappropriate word detection. The functionality object detection is provided by the mini API that I implemented. As I explained above, my API provides the functionality that detecting the objects in a picture.
#### What challenges did you met during implementation?
 During the implementation I met lots of challenges actually. This was one of the hardest tasks in any course that I have taken so far.
 - I didn't know how to implement an API so had to watch lots of tutorials to be able to implement my part.
 - I didn't know how to use Travis, so I had to learn it as well.
 - I didn't know that an API requires a frontend too so I didn't implement it. I also don't know how to do a frontend for a API so I will need to learn those as well.
 - I never submitted code via command line for Github. I had a few problems about that as well. I took more than it should for me to upload my code to Github.
 - I also didn't know how to do pull request and that we need to get reviews for pull requests.
## Review Code Of Other Team Members
#### Whose code did you review?
At first I was unaware of the concept of reviewing my friend's code so I only were able to review one of my friend's code. I reviewed Ali's code which the API implementation of the text-to-speech functionality. [The pull request and my comments can be found here.](https://github.com/bounswe/bounswe2019group9/pull/112)  I made a comment about the secrecy of the API key and failing Travis tests. My friend Ali changed his code and documentation in result of my comment slightly and reached Halit for the Travis tests. I am happy because our code base is better.
#### Code reviews that I received
I did two pull request while adding my implementation to the Github page. Because my API implementation is independent enough from our code base I developed it on my local computer and committed the changes after my implementation is done. 
 - My first pull request can be found [here](https://github.com/bounswe/bounswe2019group9/pull/96). I didn't know how to get reviews so I only got a gif from my group mate Halit as comment and my code was approved. Also because I was able to upload the code late at night, there were not enough timme.
 - My second pull request can be found [here](https://github.com/bounswe/bounswe2019group9/pull/110). This time I had two reviews, from Ahmet and ?brahim. Ahmet suggested for me to change the Json object that I am returning to a simpler one and ?brahim suggested me to add more explanation to my documentation. I added more exlanation and told Ahmet that I will be changing the json object that I am returning then I merged the pull request.
#### Unit Test
I have written only one unit test to my code. The test basically controlls the return code of the Json response to see if it is successfull. I wrote it like that as if the API returns something, there is not many chance that the response is wrong.
The test can be viewed from [here](https://github.com/bounswe/bounswe2019group9/blob/master/practice-app/obj/tests.py).
`SimpleTest(TestCase):`
`def test_obj_recognition(self):`
`picture_url = 'https://watson-developer-cloud.github.io/doc-tutorial-downloads/visual-recognition/640px-	IBM_VGA_90X8941_on_PS55.jpg'`
`request = RequestFactory().get('/obj')`
`rr = object_detection(request, picture_url)`
`self.assertEqual(rr.status_code,200)`
#### Pull Requests
As I explained above I made two pull requests.
 - My first pull request can be found [here](https://github.com/bounswe/bounswe2019group9/pull/96). I didn't know how to get reviews so I only got a gif from my group mate Halit as comment and my code was approved. Also because I was able to upload the code late at night, there were not enough timme.
 - My second pull request can be found [here](https://github.com/bounswe/bounswe2019group9/pull/110). This time I had two reviews, from Ahmet and ?brahim. Ahmet suggested for me to change the Json object that I am returning to a simpler one and ?brahim suggested me to add more explanation to my documentation. I added more exlanation and told Ahmet that I will be changing the json object that I am returning then I merged the pull request.
#### Issues
| Created by me| Assigned to me | Issue Link |  
|  -: | :--------:| :---|  
|x| | [Issue 86](https://github.com/bounswe/bounswe2019group9/issues/86) | 
|x| | [Issue 85](https://github.com/bounswe/bounswe2019group9/issues/85) |
|x|x| [Issue 81](https://github.com/bounswe/bounswe2019group9/issues/81) |
|x|x| [Issue 80](https://github.com/bounswe/bounswe2019group9/issues/80) |
|x|x| [Issue 79](https://github.com/bounswe/bounswe2019group9/issues/79) |
|x| | [Issue 88](https://github.com/bounswe/bounswe2019group9/issues/88) |
|x| | [Issue 82](https://github.com/bounswe/bounswe2019group9/issues/82) |
|x| | [Issue 83](https://github.com/bounswe/bounswe2019group9/issues/83) |
|x|x| [Issue 89](https://github.com/bounswe/bounswe2019group9/issues/89) |
|x|x| [Issue 78](https://github.com/bounswe/bounswe2019group9/issues/78) |
|x| | [Issue 87](https://github.com/bounswe/bounswe2019group9/issues/87) |
|x| | [Issue 84](https://github.com/bounswe/bounswe2019group9/issues/84) |
|x| | [Issue 90](https://github.com/bounswe/bounswe2019group9/issues/90) |
|x| | [Issue 91](https://github.com/bounswe/bounswe2019group9/issues/91) |
||x| [Issue 105](https://github.com/bounswe/bounswe2019group9/issues/105) |
## API Documentation
### Object Recognition API
This API takes a picture and recognizes the objects in that picture with the correction percentage and returns an Json abject with that data. This API can be used in our project to help the users learn the vocabulary of the object in that picture.

#### Usage
* Url for API: /obj/<Url of the picture>
* Returns a Json object such that: 
---
```json
{
  "images": [
    {
      "classifiers": [
        {
          "classifier_id": "default",
          "name": "default",
          "classes": [
            {
              "class": "<Object Name>",
              "score": <Score of the object>,
              "type_hierarchy": "<Type of the object>"
            }
          ]
        }
      ],
      "source_url": "<Url of the image>",
      "resolved_url": "<Url of the image>"
    }
  ],
  "images_processed": 1,
  "custom_classes": 0
} 
```
---
  
  Class means basically the name of the object in the picture, score is how confident the object detection is about the classification. Also the api doesn't return any classification that has a score that is less than 0.5. Type hierarych is the bigger classes that the class of the object belongs to. For example a dog is an animal too. Custom classes papameter will always be 0 for our api as we use the classes that are built-in in the watson-object-detection api which is the api that I am using for this case. Images processed will be one as we are giving single image to the api. Source url and resolved will be the same as well.

#### Example
* Picture:


![Example picture](https://watson-developer-cloud.github.io/doc-tutorial-downloads/visual-recognition/640px-IBM_VGA_90X8941_on_PS55.jpg)

* Url Input:
/obj/https://watson-developer-cloud.github.io/doc-tutorial-downloads/visual-recognition/640px-IBM_VGA_90X8941_on_PS55.jpg

* Json Output:
---
```json
{
  "images": [
    {
      "classifiers": [
        {
          "classifier_id": "default",
          "name": "default",
          "classes": [
            {
              "class": "circuit board",
              "score": 0.578,
              "type_hierarchy": "/electrical device/computer circuit/circuit board"
            },
            {
              "class": "computer circuit",
              "score": 0.755
            },
            {
              "class": "electrical device",
              "score": 0.757
            },
            {
              "class": "disk controller",
              "score": 0.553,
              "type_hierarchy": "/controller/disk controller"
            },
            {
              "class": "controller",
              "score": 0.558
            },
            {
              "class": "central processing unit",
              "score": 0.535
            },
            {
              "class": "PC board",
              "score": 0.501,
              "type_hierarchy": "/electrical device/computer circuit/PC board"
            },
            {
              "class": "CPU board",
              "score": 0.5,
              "type_hierarchy": "/electrical device/computer circuit/CPU board"
            },
            {
              "class": "electronic equipment",
              "score": 0.6
            },
            {
              "class": "memory device",
              "score": 0.599
            },
            {
              "class": "microchip",
              "score": 0.592
            },
            {
              "class": "jade green color",
              "score": 0.838
            },
            {
              "class": "emerald color",
              "score": 0.787
            }
          ]
        }
      ],
      "source_url": "https://watson-developer-cloud.github.io/doc-tutorial-downloads/visual-recognition/640px-IBM_VGA_90X8941_on_PS55.jpg",
      "resolved_url": "https://watson-developer-cloud.github.io/doc-tutorial-downloads/visual-recognition/640px-IBM_VGA_90X8941_on_PS55.jpg"
    }
  ],
  "images_processed": 1,
  "custom_classes": 0
}
```
---
